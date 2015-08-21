/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNForm.h>

@class TFNTwitterAccount, TFNFormField, NSString;

@interface T1OnboardingProfileForm : TFNForm {

	BOOL _onboardingMode;
	TFNTwitterAccount* _account;
	TFNFormField* _fullNameField;
	TFNFormField* _locationField;
	TFNFormField* _websiteField;
	TFNFormField* _bioField;

}

@property (assign,nonatomic) BOOL onboardingMode;                       //@synthesize onboardingMode=_onboardingMode - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSString * website; 
@property (nonatomic,readonly) NSString * bio; 
@property (nonatomic,retain) TFNTwitterAccount * account;               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNFormField * fullNameField;              //@synthesize fullNameField=_fullNameField - In the implementation block
@property (nonatomic,retain) TFNFormField * locationField;              //@synthesize locationField=_locationField - In the implementation block
@property (nonatomic,retain) TFNFormField * websiteField;               //@synthesize websiteField=_websiteField - In the implementation block
@property (nonatomic,retain) TFNFormField * bioField;                   //@synthesize bioField=_bioField - In the implementation block
-(NSString *)website;
-(TFNFormField *)websiteField;
-(TFNFormField *)locationField;
-(TFNFormField *)bioField;
-(BOOL)applyErrors;
-(void)logChanges;
-(BOOL)tracksEditsAndChanges;
-(long long)inputValueTypeForFormField:(id)arg1 ;
-(TFNFormField *)fullNameField;
-(void)setFullNameField:(TFNFormField *)arg1 ;
-(void)setOnboardingMode:(BOOL)arg1 ;
-(BOOL)onboardingMode;
-(void)setLocationField:(TFNFormField *)arg1 ;
-(void)setWebsiteField:(TFNFormField *)arg1 ;
-(void)setBioField:(TFNFormField *)arg1 ;
-(NSString *)name;
-(NSString *)location;
-(id)sections;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSString *)bio;
@end

