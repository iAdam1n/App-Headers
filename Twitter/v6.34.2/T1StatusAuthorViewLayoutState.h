/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterStatus, TFNTwitterAccount, TFNLayoutMetrics, NSString;

@interface T1StatusAuthorViewLayoutState : NSObject {

	BOOL _hasBookmarkIndicator;
	BOOL _isVerified;
	TFNTwitterStatus* _status;
	unsigned long long _options;
	TFNTwitterAccount* _account;
	TFNLayoutMetrics* _layoutMetrics;
	NSString* _fullName;
	NSString* _displayUsername;
	NSString* _timestamp;
	double _availableTimestampExpansion;
	CGSize _size;
	CGRect _fullNameFrame;
	CGRect _usernameFrame;
	CGRect _nameHighlightControlFrame;
	CGRect _timestampFrame;
	CGRect _timestampHighlightControlFrame;
	CGRect _badgeFrame;
	CGRect _verifiedBadgeFrame;
	CGRect _dismissFrame;

}

@property (nonatomic,retain) TFNTwitterStatus * status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNLayoutMetrics * layoutMetrics;                   //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * displayUsername;                           //@synthesize displayUsername=_displayUsername - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBookmarkIndicator;                          //@synthesize hasBookmarkIndicator=_hasBookmarkIndicator - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                                    //@synthesize isVerified=_isVerified - In the implementation block
@property (assign,nonatomic) CGRect fullNameFrame;                               //@synthesize fullNameFrame=_fullNameFrame - In the implementation block
@property (assign,nonatomic) CGRect usernameFrame;                               //@synthesize usernameFrame=_usernameFrame - In the implementation block
@property (assign,nonatomic) CGRect nameHighlightControlFrame;                   //@synthesize nameHighlightControlFrame=_nameHighlightControlFrame - In the implementation block
@property (assign,nonatomic) CGRect timestampFrame;                              //@synthesize timestampFrame=_timestampFrame - In the implementation block
@property (assign,nonatomic) CGRect timestampHighlightControlFrame;              //@synthesize timestampHighlightControlFrame=_timestampHighlightControlFrame - In the implementation block
@property (assign,nonatomic) double availableTimestampExpansion;                 //@synthesize availableTimestampExpansion=_availableTimestampExpansion - In the implementation block
@property (assign,nonatomic) CGRect badgeFrame;                                  //@synthesize badgeFrame=_badgeFrame - In the implementation block
@property (assign,nonatomic) CGRect verifiedBadgeFrame;                          //@synthesize verifiedBadgeFrame=_verifiedBadgeFrame - In the implementation block
@property (assign,nonatomic) CGRect dismissFrame;                                //@synthesize dismissFrame=_dismissFrame - In the implementation block
@property (assign,nonatomic) CGSize size;                                        //@synthesize size=_size - In the implementation block
-(CGRect)fullNameFrame;
-(void)setFullNameFrame:(CGRect)arg1 ;
-(BOOL)isVerified;
-(void)setDisplayUsername:(NSString *)arg1 ;
-(BOOL)hasBookmarkIndicator;
-(void)setHasBookmarkIndicator:(BOOL)arg1 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(CGRect)usernameFrame;
-(void)setUsernameFrame:(CGRect)arg1 ;
-(CGRect)nameHighlightControlFrame;
-(void)setNameHighlightControlFrame:(CGRect)arg1 ;
-(CGRect)timestampFrame;
-(void)setTimestampFrame:(CGRect)arg1 ;
-(CGRect)timestampHighlightControlFrame;
-(void)setTimestampHighlightControlFrame:(CGRect)arg1 ;
-(double)availableTimestampExpansion;
-(void)setAvailableTimestampExpansion:(double)arg1 ;
-(CGRect)verifiedBadgeFrame;
-(void)setVerifiedBadgeFrame:(CGRect)arg1 ;
-(CGRect)dismissFrame;
-(void)setDismissFrame:(CGRect)arg1 ;
-(CGRect)badgeFrame;
-(void)setBadgeFrame:(CGRect)arg1 ;
-(CGSize)size;
-(NSString *)timestamp;
-(void)setTimestamp:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSString *)displayUsername;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setLayoutMetrics:(TFNLayoutMetrics *)arg1 ;
-(TFNLayoutMetrics *)layoutMetrics;
@end
