The modules here in the ready base are common modules that are used on 90% of all projects.

We also have created a feature called "pressflow_7_ready_base" that is the base feature set
for the ready base.

You can add any modules, and we encourage you to use drush to do this

drush dl %module --uri=$myuri
drush en %module --uri=$myuri

Also, because this is NOT a vanilla install of Drupal, please DO NOT use drush to update the
drupal core. Either, download pressflow from git @ git@github.com:pressflow/7.git OR, you can use
our custom make files at: git@github.com:kirikintha/drupal_make.git