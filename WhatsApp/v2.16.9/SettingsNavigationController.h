/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WANavigationController.h>

@interface SettingsNavigationController : WANavigationController {

	BOOL _defersPop;

}

@property (assign,nonatomic) BOOL defersPop;              //@synthesize defersPop=_defersPop - In the implementation block
-(void)reloadViewControllers;
-(BOOL)defersPop;
-(void)setDefersPop:(BOOL)arg1 ;
-(id)init;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
@end
