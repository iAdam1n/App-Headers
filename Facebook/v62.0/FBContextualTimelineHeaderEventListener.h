/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContextualTimelineHeaderEventListener <NSObject>
@required
-(void)profilePictureLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned long long)arg4 loggingParams:(id)arg5;
-(void)coverPhotoLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned long long)arg4 loggingParams:(id)arg5;
-(void)contextItemsLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned long long)arg3 loggingParams:(id)arg4;
-(void)navTilesLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned long long)arg3 loggingParams:(id)arg4;

@end
