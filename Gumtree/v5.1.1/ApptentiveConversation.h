/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Gumtree/ApptentiveJSONModel.h>

@class NSString;

@interface ApptentiveConversation : NSObject <NSCoding, ApptentiveJSONModel> {

	NSString* _token;
	NSString* _personID;
	NSString* _deviceID;

}

@property (nonatomic,retain) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * personID;                   //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                   //@synthesize deviceID=_deviceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInstanceWithJSON:(id)arg1 ;
+(void)load;
-(id)appReleaseJSON;
-(id)sdkJSON;
-(id)apiUpdateJSON;
-(id)apiJSON;
-(void)updateWithJSON:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end
