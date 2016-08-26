/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProfilePictureFramePageSelectionTapResponder, FBProfileStagingGroundTapResponder, FBNavigationCoordinator, FBProfileStagingGroundUpdateHandler;
@class FBUserSession, FBScenePath, FBSearchBarListenerAnnouncer, FBListLogger;

@interface FBProfileMediaToolbox : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBProfilePictureFramePageSelectionTapResponder> _pageSelectionTapResponder;
	id<FBProfileStagingGroundTapResponder> _stagingGroundTapResponder;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBProfileStagingGroundUpdateHandler> _stagingGroundUpdateHandler;
	FBSearchBarListenerAnnouncer* _frameSearchAnnouncer;
	FBListLogger* _logger;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                                                     //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,__weak,readonly) id<FBProfilePictureFramePageSelectionTapResponder> pageSelectionTapResponder;              //@synthesize pageSelectionTapResponder=_pageSelectionTapResponder - In the implementation block
@property (nonatomic,__weak,readonly) id<FBProfileStagingGroundTapResponder> stagingGroundTapResponder;                          //@synthesize stagingGroundTapResponder=_stagingGroundTapResponder - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                                                //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<FBProfileStagingGroundUpdateHandler> stagingGroundUpdateHandler;                        //@synthesize stagingGroundUpdateHandler=_stagingGroundUpdateHandler - In the implementation block
@property (nonatomic,__weak,readonly) FBSearchBarListenerAnnouncer * frameSearchAnnouncer;                                       //@synthesize frameSearchAnnouncer=_frameSearchAnnouncer - In the implementation block
@property (nonatomic,retain) FBListLogger * logger;                                                                              //@synthesize logger=_logger - In the implementation block
-(FBScenePath *)scenePath;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBProfileStagingGroundTapResponder>)stagingGroundTapResponder;
-(id<FBProfileStagingGroundUpdateHandler>)stagingGroundUpdateHandler;
-(id<FBProfilePictureFramePageSelectionTapResponder>)pageSelectionTapResponder;
-(FBSearchBarListenerAnnouncer *)frameSearchAnnouncer;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 navigationCoordinator:(id)arg3 pageSelectionTapResponder:(id)arg4 stagingGroundTapResponder:(id)arg5 stagingGroundUpdateHandler:(id)arg6 frameSearchAnnouncer:(id)arg7 ;
-(FBListLogger *)logger;
-(void)setLogger:(FBListLogger *)arg1 ;
-(FBUserSession *)session;
@end
