/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeListComponent.h>

@class FBProtilesDownloadStatusListenerAnnouncer, FBProfileWaterMarkTracker, FBProfileListComponentToolbox, FBProfileHeaderDownloadStatusListenerAnnouncer;

@interface FBProfileUnseenStoriesListComponent : FBCompositeListComponent {

	FBProtilesDownloadStatusListenerAnnouncer* _protilesDownloadStatusListenerAnnouncer;
	FBProfileWaterMarkTracker* _waterMarkTracker;
	FBProfileListComponentToolbox* _toolbox;
	FBProfileHeaderDownloadStatusListenerAnnouncer* _profileHeaderDownloadStatusListenerAnnouncer;

}

@property (nonatomic,readonly) FBProtilesDownloadStatusListenerAnnouncer * protilesDownloadStatusListenerAnnouncer;                        //@synthesize protilesDownloadStatusListenerAnnouncer=_protilesDownloadStatusListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) FBProfileWaterMarkTracker * waterMarkTracker;                                                               //@synthesize waterMarkTracker=_waterMarkTracker - In the implementation block
@property (nonatomic,readonly) FBProfileListComponentToolbox * toolbox;                                                                    //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBProfileHeaderDownloadStatusListenerAnnouncer * profileHeaderDownloadStatusListenerAnnouncer;              //@synthesize profileHeaderDownloadStatusListenerAnnouncer=_profileHeaderDownloadStatusListenerAnnouncer - In the implementation block
+(id)newWithProfileID:(id)arg1 session:(id)arg2 protilesDownloadStatusListenerAnnouncer:(id)arg3 profileHeaderDownloadStatusListenerAnnouncer:(id)arg4 waterMarkTracker:(id)arg5 toolbox:(id)arg6 ;
+(id)initialState;
-(FBProfileListComponentToolbox *)toolbox;
-(FBProfileHeaderDownloadStatusListenerAnnouncer *)profileHeaderDownloadStatusListenerAnnouncer;
-(FBProtilesDownloadStatusListenerAnnouncer *)protilesDownloadStatusListenerAnnouncer;
-(FBProfileWaterMarkTracker *)waterMarkTracker;
@end
