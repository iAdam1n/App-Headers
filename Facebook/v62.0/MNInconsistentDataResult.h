/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNInconsistentDataResult : FBValueObject <NSCopying> {

	NSString* _comparisonType;
	NSString* _entityIdentifier;
	NSString* _clientData;
	NSString* _serverData;

}

@property (nonatomic,copy,readonly) NSString * comparisonType;                //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientData;                    //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverData;                    //@synthesize serverData=_serverData - In the implementation block
-(id)initWithComparisonType:(id)arg1 entityIdentifier:(id)arg2 clientData:(id)arg3 serverData:(id)arg4 ;
-(NSString *)comparisonType;
-(NSString *)entityIdentifier;
-(NSString *)serverData;
-(NSString *)clientData;
@end
