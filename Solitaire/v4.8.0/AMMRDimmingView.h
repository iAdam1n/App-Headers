/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@interface AMMRDimmingView : UIView {

	BOOL _dimmed;
	double _dimmingOpacity;

}

@property (assign,nonatomic) BOOL dimmed;                        //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) double dimmingOpacity;              //@synthesize dimmingOpacity=_dimmingOpacity - In the implementation block
-(double)dimmingOpacity;
-(void)setDimmingOpacity:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
