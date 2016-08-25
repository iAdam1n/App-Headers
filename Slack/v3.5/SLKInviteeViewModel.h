/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString, UIColor;

@interface SLKInviteeViewModel : NSObject {

	BOOL _displaysFullName;
	BOOL _isMe;
	UIImage* _thumbnailImage;
	NSString* _displayName;
	NSString* _tsid;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _userName;
	NSString* _detailInfo;
	unsigned long long _userType;
	NSString* _teamId;
	NSString* _statusIconLabel;
	NSString* _thumbnailUrl;
	NSString* _statusIcon;
	UIColor* _statusColor;
	UIColor* _tintColor;
	id _modelObject;

}

@property (nonatomic,retain) id modelObject;                               //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,readonly) NSString * tsid;                            //@synthesize tsid=_tsid - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * userName;                        //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) NSString * detailInfo;                      //@synthesize detailInfo=_detailInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long userType;                //@synthesize userType=_userType - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                          //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL displaysFullName;                      //@synthesize displaysFullName=_displaysFullName - In the implementation block
@property (nonatomic,readonly) NSString * statusIconLabel;                 //@synthesize statusIconLabel=_statusIconLabel - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel; 
@property (nonatomic,readonly) NSString * thumbnailUrl;                    //@synthesize thumbnailUrl=_thumbnailUrl - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnailImage;                   //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,readonly) NSString * statusIcon;                      //@synthesize statusIcon=_statusIcon - In the implementation block
@property (nonatomic,readonly) UIColor * statusColor;                      //@synthesize statusColor=_statusColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) BOOL isMe;                                  //@synthesize isMe=_isMe - In the implementation block
+(void)initialize;
-(NSString *)teamId;
-(NSString *)statusIcon;
-(UIColor *)statusColor;
-(NSString *)detailInfo;
-(NSString *)thumbnailUrl;
-(NSString *)tsid;
-(id)arrayProperty:(int)arg1 fromRecord:(void*)arg2 ;
-(id)stringProperty:(int)arg1 fromRecord:(void*)arg2 ;
-(id)imagePropertyFromRecord:(void*)arg1 ;
-(id)displayNameOrMe;
-(void)enumerateMultiValueOfProperty:(int)arg1 fromRecord:(void*)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithAddressBookRecordRef:(void*)arg1 ;
-(BOOL)displaysFullName;
-(NSString *)statusIconLabel;
-(id)modelObject;
-(void)setModelObject:(id)arg1 ;
-(NSString *)userName;
-(id)initWithUser:(id)arg1 ;
-(id)description;
-(UIColor *)tintColor;
-(NSString *)accessibilityLabel;
-(NSString *)displayName;
-(BOOL)isMe;
-(unsigned long long)userType;
-(UIImage *)thumbnailImage;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithEmailAddress:(id)arg1 ;
@end

