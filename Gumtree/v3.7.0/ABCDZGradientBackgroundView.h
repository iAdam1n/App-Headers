/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@interface ABCDZGradientBackgroundView : UIView {

	double ComponentsA[4];
	double ComponentsB[4];
	double BPercent;
	double ComponentsC[4];
	double CPercent;
	double ComponentsD[4];
	double DPercent;
	double ComponentsZ[4];

}
-(id)normalizeColor:(id)arg1 ;
-(void)setGradientAColor:(id)arg1 ;
-(void)setGradientBColor:(id)arg1 atPercent:(double)arg2 ;
-(void)setGradientCColor:(id)arg1 atPercent:(double)arg2 ;
-(void)setGradientDColor:(id)arg1 atPercent:(double)arg2 ;
-(void)setGradientZColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOpaque;
@end

