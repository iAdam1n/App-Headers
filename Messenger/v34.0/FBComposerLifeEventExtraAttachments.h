/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBComposerLifeEventExtraAttachments : FBValueObject <NSCopying, NSCoding> {

	BOOL _updateRelationshipStatus;
	BOOL _isCurrentWork;
	BOOL _isGraduated;
	NSString* _employerHubId;
	NSString* _schoolType;
	NSString* _schoolHubId;

}

@property (nonatomic,readonly) BOOL updateRelationshipStatus;              //@synthesize updateRelationshipStatus=_updateRelationshipStatus - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentWork;                         //@synthesize isCurrentWork=_isCurrentWork - In the implementation block
@property (nonatomic,copy,readonly) NSString * employerHubId;              //@synthesize employerHubId=_employerHubId - In the implementation block
@property (nonatomic,readonly) BOOL isGraduated;                           //@synthesize isGraduated=_isGraduated - In the implementation block
@property (nonatomic,copy,readonly) NSString * schoolType;                 //@synthesize schoolType=_schoolType - In the implementation block
@property (nonatomic,copy,readonly) NSString * schoolHubId;                //@synthesize schoolHubId=_schoolHubId - In the implementation block
-(BOOL)updateRelationshipStatus;
-(NSString *)schoolType;
-(id)initWithUpdateRelationshipStatus:(BOOL)arg1 isCurrentWork:(BOOL)arg2 employerHubId:(id)arg3 isGraduated:(BOOL)arg4 schoolType:(id)arg5 schoolHubId:(id)arg6 ;
-(BOOL)isCurrentWork;
-(NSString *)employerHubId;
-(BOOL)isGraduated;
-(NSString *)schoolHubId;
@end

