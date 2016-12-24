/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Skype/SKPContactProfilePictureViewDelegate.h>

@protocol SKPContactProfileViewDelegate;
@class UIImage, SKPPhoneNumberCollection, SKPValidatedPhoneNumber, NSArray, NSString, NSURL, NSDate, NSNumber, MKTableView, SKPContactProfilePictureView, UIImageView, MKGradientView, SKPContactProfileEntryCollection;

@interface SKPContactProfileView : UIView <UITableViewDataSource, UITableViewDelegate, SKPContactProfilePictureViewDelegate> {

	BOOL _isBlocked;
	BOOL _isBot;
	BOOL _canBeRemoved;
	BOOL _canBeBlocked;
	BOOL _shouldShowFavoriteStar;
	id<SKPContactProfileViewDelegate> _delegate;
	UIImage* _avatarImage;
	SKPPhoneNumberCollection* _phoneNumbers;
	SKPValidatedPhoneNumber* _PSTNNumber;
	NSArray* _languages;
	NSString* _skypeName;
	NSURL* _homepage;
	NSDate* _birthday;
	long long _gender;
	NSString* _about;
	NSNumber* _numberOfContacts;
	NSURL* _botPrivacyStatement;
	NSURL* _botTermsOfUse;
	NSString* _botDeveloper;
	NSString* _botCapabilities;
	NSString* _botPrivacy;
	MKTableView* _tableView;
	SKPContactProfilePictureView* _profilePictureView;
	UIImageView* _backgroundAvatarImageView;
	MKGradientView* _gradientView;
	SKPContactProfileEntryCollection* _dataSource;

}

@property (nonatomic,retain) MKTableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SKPContactProfilePictureView * profilePictureView;              //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundAvatarImageView;                        //@synthesize backgroundAvatarImageView=_backgroundAvatarImageView - In the implementation block
@property (nonatomic,retain) MKGradientView * gradientView;                                  //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) SKPContactProfileEntryCollection * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKPContactProfileViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                                          //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,retain) SKPPhoneNumberCollection * phoneNumbers;                        //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) SKPValidatedPhoneNumber * PSTNNumber;                           //@synthesize PSTNNumber=_PSTNNumber - In the implementation block
@property (nonatomic,retain) NSArray * languages;                                            //@synthesize languages=_languages - In the implementation block
@property (nonatomic,retain) NSString * skypeName;                                           //@synthesize skypeName=_skypeName - In the implementation block
@property (nonatomic,retain) NSURL * homepage;                                               //@synthesize homepage=_homepage - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                                              //@synthesize birthday=_birthday - In the implementation block
@property (assign,nonatomic) long long gender;                                               //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSString * about;                                               //@synthesize about=_about - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfContacts;                                    //@synthesize numberOfContacts=_numberOfContacts - In the implementation block
@property (assign,nonatomic) BOOL isBlocked;                                                 //@synthesize isBlocked=_isBlocked - In the implementation block
@property (assign,nonatomic) BOOL isBot;                                                     //@synthesize isBot=_isBot - In the implementation block
@property (assign,nonatomic) BOOL canBeRemoved;                                              //@synthesize canBeRemoved=_canBeRemoved - In the implementation block
@property (assign,nonatomic) BOOL canBeBlocked;                                              //@synthesize canBeBlocked=_canBeBlocked - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFavoriteStar;                                    //@synthesize shouldShowFavoriteStar=_shouldShowFavoriteStar - In the implementation block
@property (nonatomic,retain) NSURL * botPrivacyStatement;                                    //@synthesize botPrivacyStatement=_botPrivacyStatement - In the implementation block
@property (nonatomic,retain) NSURL * botTermsOfUse;                                          //@synthesize botTermsOfUse=_botTermsOfUse - In the implementation block
@property (nonatomic,retain) NSString * botDeveloper;                                        //@synthesize botDeveloper=_botDeveloper - In the implementation block
@property (nonatomic,retain) NSString * botCapabilities;                                     //@synthesize botCapabilities=_botCapabilities - In the implementation block
@property (nonatomic,retain) NSString * botPrivacy;                                          //@synthesize botPrivacy=_botPrivacy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)skypeName;
-(SKPValidatedPhoneNumber *)PSTNNumber;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)setPSTNNumber:(SKPValidatedPhoneNumber *)arg1 ;
-(void)setSkypeName:(NSString *)arg1 ;
-(NSString *)about;
-(BOOL)canBeRemoved;
-(NSURL *)homepage;
-(NSNumber *)numberOfContacts;
-(void)setAbout:(NSString *)arg1 ;
-(BOOL)shouldShowFavoriteStar;
-(void)skpContactProfilePictureViewDidTapURL:(id)arg1 ;
-(void)setShouldShowFavoriteStar:(BOOL)arg1 ;
-(void)setBackgroundAvatarImageView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundAvatarImageView;
-(void)setProfilePictureView:(SKPContactProfilePictureView *)arg1 ;
-(SKPContactProfilePictureView *)profilePictureView;
-(void)createTableHeader;
-(void)buildDataSource;
-(id)languagesString;
-(NSString *)botDeveloper;
-(NSString *)botCapabilities;
-(NSString *)botPrivacy;
-(NSURL *)botPrivacyStatement;
-(NSURL *)botTermsOfUse;
-(BOOL)canBeBlocked;
-(id)blockContactString;
-(void)setCanBeRemoved:(BOOL)arg1 ;
-(void)setCanBeBlocked:(BOOL)arg1 ;
-(void)setHomepage:(NSURL *)arg1 ;
-(void)setNumberOfContacts:(NSNumber *)arg1 ;
-(void)setBotPrivacyStatement:(NSURL *)arg1 ;
-(void)setBotTermsOfUse:(NSURL *)arg1 ;
-(void)setBotDeveloper:(NSString *)arg1 ;
-(void)setBotCapabilities:(NSString *)arg1 ;
-(void)setBotPrivacy:(NSString *)arg1 ;
-(void)updateLayoutOnVOStatusChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(SKPContactProfileEntryCollection *)arg1 ;
-(void)setDelegate:(id<SKPContactProfileViewDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)reload;
-(SKPContactProfileEntryCollection *)dataSource;
-(id<SKPContactProfileViewDelegate>)delegate;
-(void)setTableView:(MKTableView *)arg1 ;
-(MKTableView *)tableView;
-(SKPPhoneNumberCollection *)phoneNumbers;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(id)genderString;
-(NSDate *)birthday;
-(void)setIsBot:(BOOL)arg1 ;
-(BOOL)isBot;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setPhoneNumbers:(SKPPhoneNumberCollection *)arg1 ;
-(void)setGradientView:(MKGradientView *)arg1 ;
-(MKGradientView *)gradientView;
-(BOOL)isBlocked;
@end
