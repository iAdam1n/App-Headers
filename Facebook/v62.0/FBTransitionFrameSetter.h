/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryFrameSetter.h>

@class FBRichStoryLayout, NSString;

@interface FBTransitionFrameSetter : NSObject <FBRichStoryFrameSetter> {

	FBRichStoryLayout* _beginLayout;
	FBRichStoryLayout* _endLayout;
	double _transitionProgress;

}

@property (assign,nonatomic) double transitionProgress;                      //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (nonatomic,readonly) FBRichStoryLayout * beginLayout;              //@synthesize beginLayout=_beginLayout - In the implementation block
@property (nonatomic,readonly) FBRichStoryLayout * endLayout;                //@synthesize endLayout=_endLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL hasCompletedComputation; 
+(id)transitionFrameSetterWithBeginLayout:(id)arg1 endLayout:(id)arg2 ;
+(id)_transitionAttributesForProgress:(double)arg1 withBeginAttributes:(id)arg2 endAttributes:(id)arg3 ;
-(id)elementLayoutForElementID:(id)arg1 ;
-(id)layoutAttributesForElementWithID:(id)arg1 ;
-(void)computeLayoutImmediately:(BOOL)arg1 ;
-(id)currentElementsWithinFrame:(CGRect)arg1 ;
-(id)initWithBeginLayout:(id)arg1 endLayout:(id)arg2 ;
-(id)existingLayoutAttributesForElementWithID:(id)arg1 ;
-(BOOL)hasCompletedComputation;
-(FBRichStoryLayout *)endLayout;
-(FBRichStoryLayout *)beginLayout;
-(CGRect)bounds;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
@end
