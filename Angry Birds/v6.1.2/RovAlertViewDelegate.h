/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface RovAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	int m_buttonType;
	AlertBoxListener* m_listener;
	AlertBox* m_dialog;

}

@property (assign) int m_buttonType; 
@property (assign,nonatomic) AlertBoxListener* m_listener; 
@property (assign,nonatomic) AlertBox* m_dialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)m_buttonType;
-(void)setM_buttonType:(int)arg1 ;
-(AlertBox*)m_dialog;
-(void)setM_dialog:(AlertBox*)arg1 ;
-(AlertBoxListener*)m_listener;
-(void)setM_listener:(AlertBoxListener*)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

