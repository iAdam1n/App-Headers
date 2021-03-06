/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, UIImageView, MNMapSnapshotViewModel, MNMapSnapshotCacheKey, FBMapSnapshotRequest;

@interface MNMapSnapshotView : UIView {

	FBUserSession* _session;
	UIImageView* _mapImageView;
	MNMapSnapshotViewModel* _viewModel;
	MNMapSnapshotCacheKey* _snapshotKey;
	FBMapSnapshotRequest* _snapshotRequest;

}
-(void)_updateMapSnapshot;
-(void)_setMapImage:(id)arg1 ;
-(void)_requestMapImageForKey:(id)arg1 ;
-(void)_didCompleteMapImageRequestWithImage:(CGImageRef)arg1 snapshotKey:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithSession:(id)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

