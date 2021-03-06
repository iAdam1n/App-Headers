/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUHomeCollectionViewCellCollectionStyleBase.h>

@class NSMutableArray, UIView;

@interface EBUHomeCollectionViewCellStyle3 : EBUHomeCollectionViewCellCollectionStyleBase {

	NSMutableArray* _localConstraints;
	UIView* _dividerView;
	UIView* _bottomDividerView;
	UIView* _leftDividerView;
	UIView* _rightDividerView;

}

@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (assign,nonatomic,__weak) UIView * dividerView;                    //@synthesize dividerView=_dividerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomDividerView;              //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * leftDividerView;                //@synthesize leftDividerView=_leftDividerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * rightDividerView;               //@synthesize rightDividerView=_rightDividerView - In the implementation block
-(UIView *)bottomDividerView;
-(void)setBottomDividerView:(UIView *)arg1 ;
-(void)setDividerView:(UIView *)arg1 ;
-(void)setLeftDividerView:(UIView *)arg1 ;
-(void)setRightDividerView:(UIView *)arg1 ;
-(UIView *)leftDividerView;
-(UIView *)rightDividerView;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIView *)dividerView;
@end

