/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class FBPreferenceChangeConfirmer, NSString;

@interface FBExperimentSettingsConfirmerWorker : NSObject <UIAlertViewDelegate> {

	BOOL _shouldTeardown;
	/*^block*/id _confirmationBlock;
	/*^block*/id _cancellationBlock;
	FBPreferenceChangeConfirmer* _owner;

}

@property (nonatomic,copy,readonly) id confirmationBlock;                      //@synthesize confirmationBlock=_confirmationBlock - In the implementation block
@property (nonatomic,copy,readonly) id cancellationBlock;                      //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldTeardown;                              //@synthesize shouldTeardown=_shouldTeardown - In the implementation block
@property (assign,nonatomic) FBPreferenceChangeConfirmer * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)confirmationBlock;
-(void)setShouldTeardown:(BOOL)arg1 ;
-(id)initWithConfirmationBlock:(/*^block*/id)arg1 cancellationBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldTeardown;
-(id)cancellationBlock;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(FBPreferenceChangeConfirmer *)owner;
-(void)setOwner:(FBPreferenceChangeConfirmer *)arg1 ;
@end
