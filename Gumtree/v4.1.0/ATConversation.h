/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Gumtree/ATJSONModel.h>

@class NSString;

@interface ATConversation : NSObject <NSCoding, ATJSONModel> {

	NSString* token;
	NSString* personID;
	NSString* deviceID;

}

@property (nonatomic,retain) NSString * token; 
@property (nonatomic,retain) NSString * personID; 
@property (nonatomic,retain) NSString * deviceID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInstanceWithJSON:(id)arg1 ;
-(void)updateWithJSON:(id)arg1 ;
-(id)apiJSON;
-(id)appReleaseJSON;
-(id)sdkJSON;
-(id)apiUpdateJSON;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

