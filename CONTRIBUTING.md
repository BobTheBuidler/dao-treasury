# Contributing to DAO Treasury

DAO Treasury was designed to make it easy for less technical users to contribute new dashboards and visuals. This guide explains how to contribute dashboard updates using Grafana’s user interface. Whether you are creating a new dashboard or editing an existing one, this guide will walk you through the steps in simple language.

---

## Table of Contents

1. [Overview](#overview)
2. [System Patterns and Best Practices](#system-patterns-and-best-practices)
3. [Creating a New Dashboard](#creating-a-new-dashboard)
4. [Editing an Existing Dashboard](#editing-an-existing-dashboard)
5. [Important Requirements for Dashboard Contributions](#important-requirements-for-dashboard-contributions)
6. [Submitting Your Changes](#submitting-your-changes)
7. [Additional Notes](#additional-notes)

---

## Overview

This project provisions dashboards using JSON files loaded by Grafana. The dashboards are defined using the JSON configuration located in the [.grafana/provisioning/dashboards/](https://github.com/BobTheBuidler/dao-treasury/tree/master/dao_treasury/.grafana/provisioning) folder. Community contributions can update existing dashboard visuals or create new ones by using Grafana's intuitive UI.

---

## System Patterns and Best Practices

DAO Treasury follows a set of repo-wide system patterns to ensure maintainability, extensibility, and professional quality across all code and workflows:

- **Code Organization:** Follow the modular package structure, extensible sorting rules, and async stream processing patterns.
- **Testing & Quality:** Use pytest and mypy for all new code
- **Documentation:** Update Sphinx docs and onboarding instructions as needed.
- **Naming & Formatting:** Use Title Case for user-facing strings, and follow consistent naming for files, classes, and functions.
- **Extensibility:** Add new features (entities, rules, dashboards, streams) by following established patterns.
- **Security & Logging:** Use logging throughout, explicit error handling, and environment-based secrets.

---

## Creating a New Dashboard

1. **Access the Grafana UI**  
   - Open Grafana in your web browser.
   - You can login to your local deployment as an administrator with username: `admin` and password: `admin`
  
2. **Build Your Dashboard**  
   - Click on the **"+"** icon in the sidebar and choose **Dashboard**.
   - Add new panels by clicking **"Add new panel"**.
   - Configure each panel using the existing data sources available to you.

3. **Customize Visuals**  
   - Use the panel editor to choose the type of visualization (graph, table, etc.) and make any necessary styling or data configuration changes.

4. **Save Your Dashboard**  
   - Click the disk icon or choose **Save** from the dashboard menu.
   - Provide a name and any additional details as prompted.

5. **Export the Dashboard JSON**  
   - Open the dashboard settings (click the gear icon).
   - Navigate to the **JSON model** tab.
   - Click **"Export"** to download the JSON file that represents your dashboard.

6. **Prepare Your Dashboard for Inclusion in the Repo**  
   - Save the exported JSON file with a descriptive name.
   - Place the file into the appropriate subfolder within [.grafana/provisioning/dashboards/](https://github.com/BobTheBuidler/dao-treasury/tree/master/dao_treasury/.grafana/provisioning).

---

## Editing an Existing Dashboard

1. **Access the Existing Dashboard**  
   - Open Grafana in your web browser.
   - Login to your local deployment as an administrator with username: `admin` and password: `admin`.
   - Navigate to the existing dashboard you wish to modify.
   - Open the dashboard and click **Edit** to modify panels, queries, or visual styles.

2. **Make Your Changes**  
   - Adjust your panels or data queries as needed, using the same tools available when creating a new dashboard.

3. **Export the Updated JSON**  
   - After editing, open the dashboard settings and go to the **JSON model** tab.
   - Export the updated JSON file.

4. **Update the Repo**  
   - Overwrite the existing JSON file in the appropriate folder (for example: `.grafana/provisioning/dashboards/treasury/Treasury.json` or `.grafana/provisioning/dashboards/transactions/Treasury Transactions.json`) with your updated version.

---

## Important Requirements for Dashboard Contributions

When contributing new dashboards or updating existing ones, please follow these important requirements to ensure quality and consistency:

- **Descriptions are Required:**  
  Every dashboard and every panel must have a clear, specific, and helpful description.  
  - The description should explain the purpose, key metrics, and intended use.
  - If the dashboard or panel uses filters (templating variables), describe what each filter does and how it affects the data shown.
  - If a panel uses Data Links, explain what those links do and, if possible, provide an example use case.
  - For longer descriptions, use newlines to break up content for readability.
  - Avoid leaving descriptions blank or using placeholders like "No description" or "TBD".

Following these requirements helps keep our dashboards user-friendly, well-documented, and easy to maintain!

---

## Submitting Your Changes

1. **Fork or Clone the Repository**  
   - Ensure you have your fork or a local working copy of the repository.

2. **Create a New Branch**  
   - For new dashboards, consider naming your branch something like `new-dashboard-<short-name>`.
   - For edits, use a branch name like `update-dashboard-<short-name>`.

3. **Commit Your Changes**  
   - Add the new or updated JSON file(s) to your commit.
   - Include a commit message that clearly explains your changes (e.g., "Added new sales dashboard" or "Updated layout for Treasury dashboard").

4. **Open a Pull Request (PR)**  
   - Push your branch to your fork, then open a PR against the main repository.
   - Provide a clear description of what you did and why.
   - Follow any additional PR guidelines as mentioned in the project’s [README](https://github.com/BobTheBuidler/dao-treasury/blob/master/README.md).

---

## Additional Notes

- **Review Process:**  
  Your PR will be reviewed by the maintainers. They may provide feedback or ask for changes before merging.

- **Testing Changes:**  
  If possible, preview your dashboard changes in Grafana before exporting and submitting them. This can help catch any visual or configuration issues early.

- **Help and Questions:**  
  If you are not too technical or need clarification at any step, please don’t hesitate to ask for help via the project’s communication channels.

---

Thank you for contributing to the project and helping improve our Grafana dashboards!
