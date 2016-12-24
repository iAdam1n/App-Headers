/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponent.h>

@protocol FBQueriedEntityFieldsProtocol;
@class FBAnalyticsInfo, FBFeedToolbox, FBMemModelObject, FBMemVideo, FBVideoViewManager;

@interface FBVideoChannelContainerComponent : CKStatefulViewComponent {

	FBAnalyticsInfo* _analyticsInfo;
	FBFeedToolbox* _toolbox;
	FBMemModelObject*<FBQueriedEntityFieldsProtocol> _parent;
	unsigned long long _videoPlayerOptions;
	FBMemVideo* _video;
	FBVideoViewManager* _videoViewManager;

}

@property (nonatomic,copy,readonly) FBAnalyticsInfo * analyticsInfo;                                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedEntityFieldsProtocol> parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) unsigned long long videoPlayerOptions;                                //@synthesize videoPlayerOptions=_videoPlayerOptions - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                                   //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBVideoViewManager * videoViewManager;                                //@synthesize videoViewManager=_videoViewManager - In the implementation block
+(id)newWithVideo:(id)arg1 parent:(id)arg2 videoPlayerOptions:(unsigned long long)arg3 size:(const CKComponentSize*)arg4 videoViewManager:(id)arg5 toolbox:(id)arg6 ;
-(FBFeedToolbox *)toolbox;
-(FBAnalyticsInfo *)analyticsInfo;
-(FBVideoViewManager *)videoViewManager;
-(unsigned long long)videoPlayerOptions;
-(FBMemModelObject*<FBQueriedEntityFieldsProtocol>)parent;
-(FBMemVideo *)video;
@end
