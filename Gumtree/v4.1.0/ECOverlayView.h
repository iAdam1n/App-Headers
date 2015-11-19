/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@interface ECOverlayView : UIView {

	CGRect _areaOfInterest;

}

@property (assign,nonatomic) CGRect areaOfInterest;              //@synthesize areaOfInterest=_areaOfInterest - In the implementation block
+(id)overlayOnView:(id)arg1 areaOfInterest:(CGRect)arg2 ;
-(CGRect)areaOfInterest;
-(void)setAreaOfInterest:(CGRect)arg1 ;
-(void)overlayTapped:(id)arg1 ;
-(void)hideAndRemoveAnimated:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
