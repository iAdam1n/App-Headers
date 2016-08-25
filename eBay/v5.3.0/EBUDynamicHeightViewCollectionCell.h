/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUViewWrapperCollectionViewCell.h>
#import <eBay/EBUDynamicHeightView.h>
#import <eBay/EBUDynamicHeightViewDelegate.h>

@protocol EBUDynamicHeightViewDelegate;
@class NSObject, EBUDividerView, NSString;

@interface EBUDynamicHeightViewCollectionCell : EBUViewWrapperCollectionViewCell <EBUDynamicHeightView, EBUDynamicHeightViewDelegate> {

	BOOL _removeContainedViewOnReuse;
	BOOL _shouldShowBottomDividerView;
	BOOL _shouldAddAutoResizingMask;
	id _viewKey;
	NSObject*<EBUDynamicHeightViewDelegate> _delegate;
	double _dividerLeftInset;
	double _dividerRightInset;
	EBUDividerView* _dividerView;

}

@property (nonatomic,retain) UIView*<EBUDynamicHeightView> containedView; 
@property (assign,nonatomic) BOOL removeContainedViewOnReuse;                                      //@synthesize removeContainedViewOnReuse=_removeContainedViewOnReuse - In the implementation block
@property (nonatomic,retain) id viewKey;                                                           //@synthesize viewKey=_viewKey - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<EBUDynamicHeightViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBottomDividerView;                                     //@synthesize shouldShowBottomDividerView=_shouldShowBottomDividerView - In the implementation block
@property (assign,nonatomic) double dividerLeftInset;                                              //@synthesize dividerLeftInset=_dividerLeftInset - In the implementation block
@property (assign,nonatomic) double dividerRightInset;                                             //@synthesize dividerRightInset=_dividerRightInset - In the implementation block
@property (nonatomic,retain) EBUDividerView * dividerView;                                         //@synthesize dividerView=_dividerView - In the implementation block
@property (assign,nonatomic) BOOL shouldAddAutoResizingMask;                                       //@synthesize shouldAddAutoResizingMask=_shouldAddAutoResizingMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL editing; 
-(void)invalidateHeight;
-(void)setContainedView:(UIView*<EBUDynamicHeightView>)arg1 ;
-(void)viewHeightChanged:(id)arg1 ;
-(void)setRemoveContainedViewOnReuse:(BOOL)arg1 ;
-(id)viewKey;
-(void)setViewKey:(id)arg1 ;
-(void)setDividerRightInset:(double)arg1 ;
-(void)setDividerLeftInset:(double)arg1 ;
-(void)setShouldShowBottomDividerView:(BOOL)arg1 ;
-(void)setDividerView:(EBUDividerView *)arg1 ;
-(EBUDividerView *)dividerView;
-(BOOL)shouldAddAutoResizingMask;
-(BOOL)shouldShowBottomDividerView;
-(BOOL)removeContainedViewOnReuse;
-(double)dividerLeftInset;
-(double)dividerRightInset;
-(void)setShouldAddAutoResizingMask:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<EBUDynamicHeightViewDelegate>)arg1 ;
-(NSObject*<EBUDynamicHeightViewDelegate>)delegate;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg1 ;
-(double)heightForWidth:(double)arg1 ;
@end

