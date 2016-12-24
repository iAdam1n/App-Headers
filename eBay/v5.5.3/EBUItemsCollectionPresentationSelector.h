/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@protocol EBUItemsCollectionPresentationSelectorDelegate;
@class NSMutableArray;

@interface EBUItemsCollectionPresentationSelector : UIView {

	id<EBUItemsCollectionPresentationSelectorDelegate> _delegate;
	NSMutableArray* _buttons;
	NSMutableArray* _localConstraints;
	unsigned long long _selectorType;

}

@property (nonatomic,retain) NSMutableArray * buttons;                                                        //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;                                               //@synthesize localConstraints=_localConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long selectorType;                                                 //@synthesize selectorType=_selectorType - In the implementation block
@property (assign,nonatomic,__weak) id<EBUItemsCollectionPresentationSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)makeSelectorWithMask:(long long)arg1 selectorType:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mask:(long long)arg2 type:(unsigned long long)arg3 ;
-(id)makeButtonForPresentation:(long long)arg1 ;
-(void)updateSelectorState;
-(unsigned long long)selectorType;
-(void)setSelectorType:(unsigned long long)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<EBUItemsCollectionPresentationSelectorDelegate>)arg1 ;
-(id<EBUItemsCollectionPresentationSelectorDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(id)accessibilityLabel;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(void)buttonAction:(id)arg1 ;
-(id)selectedButton;
@end
