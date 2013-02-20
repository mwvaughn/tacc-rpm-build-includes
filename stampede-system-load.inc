# Support for the lmod system
if [ -f "$BASH_ENV" ]; then
  export MODULEPATH=/opt/apps/xsede/modulefiles:/opt/apps/teragrid/modulefiles:/opt/apps/modulefiles:/opt/modulefiles
  . $BASH_ENV
fi
