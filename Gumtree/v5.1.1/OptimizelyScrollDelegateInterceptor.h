/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class NSObject, NSString;

@interface OptimizelyScrollDelegateInterceptor : NSObject <UIScrollViewDelegate> {

	NSObject*<UIScrollViewDelegate> _scrollViewDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<UIScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(NSObject*<UIScrollViewDelegate>)arg1 ;
@end

