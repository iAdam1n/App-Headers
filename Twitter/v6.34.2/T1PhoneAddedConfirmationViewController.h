/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSString, TFNBooleanItem, TFNButton;

@interface T1PhoneAddedConfirmationViewController : TFNItemsDataViewController <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	NSString* _prompt;
	TFNBooleanItem* _discoverabilityItem;
	TFNButton* _doneButton;

}

@property (nonatomic,copy) NSString * prompt;                                   //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) TFNBooleanItem * discoverabilityItem;              //@synthesize discoverabilityItem=_discoverabilityItem - In the implementation block
@property (nonatomic,retain) TFNButton * doneButton;                            //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                       //@synthesize account=_account - In the implementation block
-(TFNBooleanItem *)discoverabilityItem;
-(void)_modifyDiscoverableByPhone:(BOOL)arg1 withBooleanItem:(id)arg2 ;
-(void)setDiscoverabilityItem:(TFNBooleanItem *)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)update;
-(void)_done;
-(void)setDoneButton:(TFNButton *)arg1 ;
-(TFNButton *)doneButton;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

