#include <plasma/abstractrunner.h>
#include <plasma/animationdriver.h>
#include <plasma/animator.h>
#include <plasma/applet.h>
#include <plasma/containment.h>
#include <plasma/corona.h>
#include <plasma/datacontainer.h>
#include <plasma/dataengine.h>
#include <plasma/dataenginemanager.h>
#include <plasma/delegate.h>
#include <plasma/dialog.h>
#include <plasma/glapplet.h>
#include <plasma/package.h>
#include <plasma/packagemetadata.h>
#include <plasma/packagestructure.h>
#include <plasma/paintutils.h>
#include <plasma/plasma.h>
#include <plasma/querymatch.h>
#include <plasma/runnercontext.h>
#include <plasma/runnermanager.h>
#include <plasma/scripting/appletscript.h>
#include <plasma/scripting/dataenginescript.h>
#include <plasma/scripting/runnerscript.h>
#include <plasma/scripting/scriptengine.h>
//#include <plasma/service.h>
//#include <plasma/servicejob.h>
#include <plasma/svg.h>
#include <plasma/theme.h>
#include <plasma/tooltipmanager.h>
#include <plasma/view.h>
#include <plasma/wallpaper.h>
#include <plasma/widgets/checkbox.h>
#include <plasma/widgets/combobox.h>
#include <plasma/widgets/groupbox.h>
#include <plasma/widgets/label.h>
#include <plasma/widgets/lineedit.h>
#include <plasma/widgets/meter.h>
#include <plasma/widgets/pushbutton.h>
#include <plasma/widgets/radiobutton.h>
#include <plasma/widgets/scrollbar.h>
#include <plasma/widgets/signalplotter.h>
#include <plasma/widgets/textedit.h>

#if KDE_IS_VERSION(4, 2, 0)
#include <plasma/configloader.h>
#include <plasma/context.h>
#include <plasma/extender.h>
#include <plasma/extenderitem.h>
#include <plasma/framesvg.h>
#include <plasma/popupapplet.h>
#include <plasma/tooltipcontent.h>
#include <plasma/widgets/busywidget.h>
#include <plasma/widgets/flashinglabel.h>
#include <plasma/widgets/frame.h>
#include <plasma/widgets/iconwidget.h>
#include <plasma/widgets/slider.h>
#include <plasma/widgets/svgwidget.h>
#include <plasma/widgets/tabbar.h>
#include <plasma/widgets/toolbutton.h>
#include <plasma/widgets/treeview.h>
#include <plasma/widgets/webview.h>
#endif

#if KDE_IS_VERSION(4, 3, 0)
#include <plasma/extendergroup.h>
#include <plasma/runnersyntax.h>
#include <plasma/widgets/scrollwidget.h>
#include <plasma/widgets/spinbox.h>
#include <plasma/widgets/textbrowser.h>
#include <plasma/widgets/videowidget.h>
#endif

#if KDE_IS_VERSION(4, 4, 0)
#include <plasma/abstracttoolbox.h>
#include <plasma/accessappletjob.h>
#include <plasma/accessmanager.h>
#include <plasma/animation.h>
#include <plasma/animations/animation.h>
#include <plasma/authorizationinterface.h>
#include <plasma/authorizationmanager.h>
#include <plasma/authorizationrule.h>
#include <plasma/clientpinrequest.h>
#include <plasma/containmentactions.h>
#include <plasma/containmentactionspluginsconfig.h>
#include <plasma/credentials.h>
#include <plasma/scripting/wallpaperscript.h>
#include <plasma/serviceaccessjob.h>
#include <plasma/widgets/itembackground.h>
#include <plasma/widgets/separator.h>
#include <plasma/windoweffects.h>
#endif

#if KDE_IS_VERSION(4, 5, 0)
#include <plasma/abstractdialogmanager.h>
#endif
