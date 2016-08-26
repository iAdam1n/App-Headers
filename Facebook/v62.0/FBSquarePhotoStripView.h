/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBGridViewDelegate.h>

@class FBUserSession, FBGridView, NSArray, NSString;

@interface FBSquarePhotoStripView : UIView <FBGridViewDelegate> {

	FBUserSession* _session;
	FBGridView* _gridView;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * photos;                        //@synthesize photos=_photos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightConstrainedWithWidth:(double)arg1 ;
-(id)collectionView:(id)arg1 viewForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 configureView:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(unsigned long long)collectionView:(id)arg1 numberOfItemsForLayout:(id)arg2 ;
-(unsigned long long)collectionView:(id)arg1 spacingForLayout:(id)arg2 ;
-(FBGridViewItemSpans)collectionView:(id)arg1 layout:(id)arg2 itemSpansForItemAtIndexPath:(id)arg3 ;
-(void)_updatePhotoSubviewsIfNeeded;
-(void)layoutSubviews;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)initWithSession:(id)arg1 ;
@end
