/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBLiveStatusUpdateRegistrationToken;
@class NSString, FBMemModelObject;

@interface FBVideoHomeDataSourceTokenHolder : NSObject {

	NSString* _storyID;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	id<FBLiveStatusUpdateRegistrationToken> _token;

}

@property (nonatomic,copy,readonly) NSString * storyID;                                                              //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;                            //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) id<FBLiveStatusUpdateRegistrationToken> token;                                        //@synthesize token=_token - In the implementation block
-(NSString *)storyID;
-(id)initWithStoryID:(id)arg1 component:(id)arg2 unit:(id)arg3 token:(id)arg4 ;
-(id<FBLiveStatusUpdateRegistrationToken>)token;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)component;
-(void)setComponent:(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
-(void)setUnit:(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)arg1 ;
@end
