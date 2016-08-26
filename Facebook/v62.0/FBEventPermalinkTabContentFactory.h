/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemEvent, FBEventPermalinkChunkedLoadingModel, FBEventPermalinkToolbox;

@interface FBEventPermalinkTabContentFactory : NSObject {

	FBMemEvent* _event;
	FBEventPermalinkChunkedLoadingModel* _loadingModel;
	FBEventPermalinkToolbox* _toolbox;
	long long _activityBadgeCount;

}
-(/*^block*/id)_builderForTab:(unsigned long long)arg1 ;
-(BOOL)isTabValid:(unsigned long long)arg1 ;
-(id)initWithEvent:(id)arg1 loadingModel:(id)arg2 toolbox:(id)arg3 ;
-(long long)_badgeCountForTab:(unsigned long long)arg1 ;
-(id)_aboutTabContent;
-(id)_discussionTabContent;
-(id)_privateHomeTabContent;
-(id)_activityTabContent;
-(id)buildTab:(unsigned long long)arg1 ;
-(id)buildTabListConfiguration:(unsigned long long)arg1 ;
-(void)didResetActivityBadgeCount;
@end
