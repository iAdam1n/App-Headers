/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OARequestParameter : NSObject {

	NSString* name;
	NSString* value;

}

@property (retain) NSString * name; 
@property (retain) NSString * value; 
+(id)requestParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)URLEncodedNameValuePair;
-(id)URLEncodedName;
-(id)URLEncodedValue;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end
