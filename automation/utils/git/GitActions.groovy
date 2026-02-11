def gitRun(String gitCommand, String auth = null) {
    String cmd = "git "

    if (auth) {
        cmd += "-c http.extraHeader=\"Authorization: Basic ${auth}\" "
    }

    cmd += gitCommand
    echo "git_cmd:[${cmd}]"
    return sh(script: cmd, returnStdout: true).trim()
}

def clone(String url, String auth = null) {
    gitRun(" clone ${url}", auth)
}

def checkout(String branch) {
    gitRun(" checkout ${branch}")
}

def createBranch(String branch) {
    gitRun(" checkout -b ${branch}")
}

def fetch(String auth = null) {
    gitRun(" fetch --all --prune", auth)
}

def pull(String auth = null) {
    gitRun(" pull", auth)
}

def rebase(String branch) {
    gitRun(" rebase ${branch}")
}

def merge(String branch) {
    gitRun(" merge ${branch}")
}

def commit(String message) {
    gitRun(" add . && git commit -sm ${message}")
}

def push(String remote, String branch, String auth = null) {
    gitRun(" push ${remote} ${branch}", auth)
}

def tag(String tag) {
    gitRun(" tag ${tag}")
}

def deleteTag(String tag) {
    gitRun(" tag -d ${tag}")
}

def status() {
    gitRun(" status")
}

def currentBranch() {
    gitRun("rev-parse --abbrev-ref HEAD")
}

def changedFiles() {
    return sh(
        script: "git diff --name-only",
        returnStdout: true
    ).trim().split("\\n")
}

def clean() {
    gitRun(" clean -fdx")
}

def resetHard() {
    gitRun(" reset --hard")
}

/**
 * Check whether a local branch exists.
 */
def branchExists(String branch) {
    return sh(
        script: "git show-ref --verify --quiet refs/heads/${branch}",
        returnStatus: true
    ) == 0
}

/**
 * Check whether a remote branch exists.
 */
def remoteBranchExists(String remote, String branch) {
    return sh(
        script: "git ls-remote --heads ${remote} ${branch}",
        returnStdout: true
    ).trim() != ""
}

/**
 * Return current commit SHA.
 */
def currentCommit() {
    return sh(
        script: "git rev-parse HEAD",
        returnStdout: true
    ).trim()
}

/**
 * Print a short log.
 */
def log(int count = 10) {
    sh "git log --oneline --graph --decorate --max-count=${count}"
}

/**
 * Print the configured remotes.
 */
def remotes() {
    sh "git remote -v"
}

def customCmd(String command, String auth = null) {
    gitRun(" ${command}", auth)
}

return this
