/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class UIView;

@interface ECTouchFeedbackBehavior : NSObject {

	BOOL _highlighted;
	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                 //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)touchesEnded;
-(void)touchesBeganAtPoint:(CGPoint)arg1 ;
-(void)doAnimation:(CGPoint)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithView:(id)arg1 ;
-(BOOL)highlighted;
@end
