#include <akonadi/agentbase.h>
#include <akonadi/agentfilterproxymodel.h>
#include <akonadi/agentinstance.h>
#include <akonadi/agentinstancecreatejob.h>
#include <akonadi/agentinstancemodel.h>
#include <akonadi/agentinstancewidget.h>
#include <akonadi/agentmanager.h>
#include <akonadi/agenttype.h>
#include <akonadi/agenttypedialog.h>
#include <akonadi/agenttypemodel.h>
#include <akonadi/agenttypewidget.h>
#include <akonadi/akonadi_export.h>
#include <akonadi/attribute.h>
#include <akonadi/attributefactory.h>
#include <akonadi/cachepolicy.h>
#include <akonadi/changerecorder.h>
#include <akonadi/collection.h>
#include <akonadi/collectioncombobox.h>
#include <akonadi/collectioncopyjob.h>
#include <akonadi/collectioncreatejob.h>
#include <akonadi/collectiondeletejob.h>
#include <akonadi/collectiondialog.h>
#include <akonadi/collectionfetchjob.h>
#include <akonadi/collectionfetchscope.h>
#include <akonadi/collectionfilterproxymodel.h>
#include <akonadi/collectionmodel.h>
#include <akonadi/collectionmodifyjob.h>
#include <akonadi/collectionmovejob.h>
#include <akonadi/collectionpropertiesdialog.h>
#include <akonadi/collectionpropertiespage.h>
#include <akonadi/collectionquotaattribute.h>
#include <akonadi/collectionrequester.h>
#include <akonadi/collectionstatistics.h>
#include <akonadi/collectionstatisticsdelegate.h>
#include <akonadi/collectionstatisticsjob.h>
#include <akonadi/collectionstatisticsmodel.h>
#include <akonadi/collectionview.h>
#include <akonadi/contact/akonadi-contact_export.h>
#include <akonadi/contact/contactdefaultactions.h>
#include <akonadi/contact/contacteditor.h>
#include <akonadi/contact/contacteditordialog.h>
#include <akonadi/contact/contacteditorpageplugin.h>
#include <akonadi/contact/contactgroupeditor.h>
#include <akonadi/contact/contactgroupeditordialog.h>
#include <akonadi/contact/contactgroupexpandjob.h>
#include <akonadi/contact/contactgroupsearchjob.h>
#include <akonadi/contact/contactgroupviewer.h>
#include <akonadi/contact/contactgroupviewerdialog.h>
#include <akonadi/contact/contactsearchjob.h>
#include <akonadi/contact/contactviewer.h>
#include <akonadi/contact/contactviewerdialog.h>
#include <akonadi/control.h>
#include <akonadi/entity.h>
#include <akonadi/entitydisplayattribute.h>
#include <akonadi/entityhiddenattribute.h>
#include <akonadi/entitylistview.h>
#include <akonadi/entitymimetypefiltermodel.h>
#include <akonadi/entitytreemodel.h>
#include <akonadi/entitytreeview.h>
#include <akonadi/entitytreeviewstatesaver.h>
#include <akonadi/exception.h>
#include <akonadi/favoritecollectionsmodel.h>
#include <akonadi/item.h>
#include <akonadi/itemcopyjob.h>
#include <akonadi/itemcreatejob.h>
#include <akonadi/itemdeletejob.h>
#include <akonadi/itemfetchjob.h>
#include <akonadi/itemfetchscope.h>
#include <akonadi/itemmodel.h>
#include <akonadi/itemmodifyjob.h>
#include <akonadi/itemmonitor.h>
#include <akonadi/itemmovejob.h>
#include <akonadi/itempayloadinternals_p.h>
#include <akonadi/itemsearchjob.h>
#include <akonadi/itemserializerplugin.h>
#include <akonadi/itemsync.h>
#include <akonadi/itemview.h>
#include <akonadi/job.h>
#include <akonadi/kabc/akonadi-kabc_export.h>
#include <akonadi/kabc/contactparts.h>
#include <akonadi/kmime/addressattribute.h>
#include <akonadi/kmime/akonadi-kmime_export.h>
#include <akonadi/kmime/messagefolderattribute.h>
#include <akonadi/kmime/messagemodel.h>
#include <akonadi/kmime/messageparts.h>
#include <akonadi/kmime/messagethreaderproxymodel.h>
#include <akonadi/kmime/messagethreadingattribute.h>
#include <akonadi/linkjob.h>
#include <akonadi/mimetypechecker.h>
#include <akonadi/monitor.h>
#include <akonadi/partfetcher.h>
#include <akonadi/preprocessorbase.h>
#include <akonadi/resourcebase.h>
#include <akonadi/resourcesynchronizationjob.h>
#include <akonadi/searchcreatejob.h>
#include <akonadi/selectionproxymodel.h>
#include <akonadi/servermanager.h>
#include <akonadi/session.h>
#include <akonadi/standardactionmanager.h>
#include <akonadi/statisticsproxymodel.h>
#include <akonadi/tagfetchscope.h>
#include <akonadi/transactionjobs.h>
#include <akonadi/transactionsequence.h>
#include <akonadi/transportresourcebase.h>
#include <akonadi/unlinkjob.h>
