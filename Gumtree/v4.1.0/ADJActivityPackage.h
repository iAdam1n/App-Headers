/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface ADJActivityPackage : NSObject <NSCoding> {

	int _activityKind;
	NSString* _path;
	NSString* _clientSdk;
	NSDictionary* _parameters;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * clientSdk;                     //@synthesize clientSdk=_clientSdk - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) int activityKind;                       //@synthesize activityKind=_activityKind - In the implementation block
@property (nonatomic,copy) NSString * suffix;                        //@synthesize suffix=_suffix - In the implementation block
-(int)activityKind;
-(NSString *)clientSdk;
-(void)setClientSdk:(NSString *)arg1 ;
-(void)setActivityKind:(int)arg1 ;
-(id)extendedString;
-(id)successMessage;
-(id)failureMessage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
@end

