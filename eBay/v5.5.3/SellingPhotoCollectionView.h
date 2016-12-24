/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <eBay/SellingPhotoCellEventHandling.h>

@protocol SellingPhotoCollectionViewDelegate;
@class NSArray, GuidanceBoxView, SellingPhotoCell, NSString;

@interface SellingPhotoCollectionView : UIView <SellingPhotoCellEventHandling> {

	BOOL _isDragging;
	id<SellingPhotoCollectionViewDelegate> _delegate;
	NSArray* _cells;
	long long _beginningTouchIndex;
	GuidanceBoxView* _helpBubbleView;

}

@property (assign,nonatomic) long long beginningTouchIndex;                                       //@synthesize beginningTouchIndex=_beginningTouchIndex - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                                                     //@synthesize isDragging=_isDragging - In the implementation block
@property (nonatomic,retain) NSArray * cells;                                                     //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) GuidanceBoxView * helpBubbleView;                                    //@synthesize helpBubbleView=_helpBubbleView - In the implementation block
@property (assign,nonatomic,__weak) id<SellingPhotoCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredCellMargin; 
@property (nonatomic,readonly) double effectiveCellMargin; 
@property (nonatomic,readonly) double preferredHeight; 
@property (nonatomic,readonly) SellingPhotoCell * addPhotoCell; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)effectiveCellMargin;
-(void)layoutPhotoCells;
-(SellingPhotoCell *)addPhotoCell;
-(void)photoCellTapped:(id)arg1 ;
-(long long)beginningTouchIndex;
-(void)updateForThemeChange;
-(BOOL)canBeginDragging:(id)arg1 ;
-(void)draggingBegan:(id)arg1 ;
-(void)draggingMoved:(id)arg1 ;
-(void)draggingCancelled:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(void)photoCellDeleteAction:(id)arg1 ;
-(void)photoCellToggleAction:(id)arg1 ;
-(unsigned long long)visibleCellCount;
-(id)cellForCellIndex:(unsigned long long)arg1 ;
-(unsigned long long)photoCellCount;
-(id)cellForPhotoIndex:(unsigned long long)arg1 ;
-(CGRect)cellFrameForCellIndex:(unsigned long long)arg1 ;
-(BOOL)shouldDisplayHelpBubble;
-(void)layoutHelpBubble;
-(void)draggingDone;
-(CGRect)cellFrameForPhotoIndex:(unsigned long long)arg1 ;
-(void)moveCellAtPhotoIndex:(unsigned long long)arg1 toPhotoIndex:(unsigned long long)arg2 ;
-(id)photoCells;
-(double)preferredCellMargin;
-(void)setBeginningTouchIndex:(long long)arg1 ;
-(GuidanceBoxView *)helpBubbleView;
-(void)setHelpBubbleView:(GuidanceBoxView *)arg1 ;
-(void)setDelegate:(id<SellingPhotoCollectionViewDelegate>)arg1 ;
-(BOOL)isDragging;
-(id<SellingPhotoCollectionViewDelegate>)delegate;
-(void)awakeFromNib;
-(id)visibleCells;
-(double)preferredHeight;
-(NSArray *)cells;
-(void)setCells:(NSArray *)arg1 ;
-(void)setIsDragging:(BOOL)arg1 ;
-(unsigned long long)cellCount;
@end
