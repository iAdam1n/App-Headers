/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMOutlineViewController.h>

@class ABCustomOutlineNavigationBar, NSString;

@interface ABOutlineViewController : JMOutlineViewController {

	BOOL _styleChanged;

}

@property (readonly) ABCustomOutlineNavigationBar * navigationBar; 
@property (readonly) NSString * customScreenNameForAnalytics; 
@property (assign) BOOL styleChanged;                                           //@synthesize styleChanged=_styleChanged - In the implementation block
-(void)respondToStyleChangeNotification;
-(NSString *)customScreenNameForAnalytics;
-(void)respondToStyleChange;
-(BOOL)styleChanged;
-(void)reportScreenAppearanceToAnalytics;
-(void)setStyleChanged:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(ABCustomOutlineNavigationBar *)navigationBar;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

