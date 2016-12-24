/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol NSObject;
@class NSString;

@interface FlurryPageViewDelegateOld : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate, UITableViewDelegate> {

	id<NSObject> _delegate;

}

@property (nonatomic,retain) id<NSObject> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createDelegateOnTarget:(id)arg1 ;
+(id)createInvocationOnSelector:(SEL)arg1 target:(id)arg2 ;
-(void)setDelegate:(id<NSObject>)arg1 ;
-(void)dealloc;
-(id<NSObject>)delegate;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2 ;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
@end
