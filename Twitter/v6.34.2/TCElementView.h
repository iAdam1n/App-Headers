/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class TCElement;

@interface TCElementView : UIView {

	TCElement* _element;

}

@property (assign,nonatomic) BOOL drawsContent; 
@property (assign,nonatomic,__weak) TCElement * element;              //@synthesize element=_element - In the implementation block
+(Class)layerClass;
-(BOOL)drawsContent;
-(void)setDrawsContent:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)requiresConstraintBasedLayout;
-(id)initWithElement:(id)arg1 ;
-(void)setElement:(TCElement *)arg1 ;
-(TCElement *)element;
@end

