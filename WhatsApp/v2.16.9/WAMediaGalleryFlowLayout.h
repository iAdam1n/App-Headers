/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary, NSMutableArray;

@interface WAMediaGalleryFlowLayout : UICollectionViewFlowLayout {

	NSDictionary* _layoutAttributesForDeletedItems;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;

}

@property (retain) NSMutableArray * deleteIndexPaths;                                   //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (retain) NSMutableArray * insertIndexPaths;                                   //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (nonatomic,copy) NSDictionary * layoutAttributesForDeletedItems;              //@synthesize layoutAttributesForDeletedItems=_layoutAttributesForDeletedItems - In the implementation block
+(Class)layoutAttributesClass;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(void)setLayoutAttributesForDeletedItems:(NSDictionary *)arg1 ;
-(NSDictionary *)layoutAttributesForDeletedItems;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

