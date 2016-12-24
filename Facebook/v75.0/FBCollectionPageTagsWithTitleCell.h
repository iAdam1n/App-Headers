/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionAbstractCell.h>

@protocol FBCollectionPageTagsWithTitleCellDelegate;
@class NSMutableDictionary, NSMutableArray, FBCollectionProfileFieldSection;

@interface FBCollectionPageTagsWithTitleCell : FBCollectionAbstractCell {

	NSMutableDictionary* _pagesURLDic;
	NSMutableArray* _contentLabelArray;
	FBCollectionProfileFieldSection* _collectionItem;
	id<FBCollectionPageTagsWithTitleCellDelegate> _delegate;

}

@property (nonatomic,retain) FBCollectionProfileFieldSection * collectionItem;                           //@synthesize collectionItem=_collectionItem - In the implementation block
@property (assign,nonatomic,__weak) id<FBCollectionPageTagsWithTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)availableWidth;
+(double)desiredHeightForCollectionItem:(id)arg1 ;
+(double)calculateContentLabelHeightForCollectionItem:(id)arg1 contentLabelArray:(id)arg2 shouldUpdateContentLabels:(BOOL)arg3 target:(id)arg4 pagesURLDic:(id)arg5 ;
+(double)cellWidth;
-(void)setCollectionItem:(FBCollectionProfileFieldSection *)arg1 ;
-(FBCollectionProfileFieldSection *)collectionItem;
-(id)initWithReuseIdentifier:(id)arg1 collectionItem:(id)arg2 showCustomBorder:(BOOL)arg3 ;
-(BOOL)hasCustomBorder;
-(void)updateContentLabelsForCollectionItem:(id)arg1 ;
-(void)setDelegate:(id<FBCollectionPageTagsWithTitleCellDelegate>)arg1 ;
-(id<FBCollectionPageTagsWithTitleCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)tapAction:(id)arg1 ;
@end
