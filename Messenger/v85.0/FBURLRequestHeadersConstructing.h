/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSError;


@protocol FBURLRequestHeadersConstructing
@property (nonatomic,readonly) id<FBURLRequestDefining> request; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,copy,readonly) NSString * scheme; 
@property (nonatomic,retain) NSError * error; 
@required
-(void)setValue:(id)arg1 forHttpHeaderField:(id)arg2;
-(NSString *)scheme;
-(id<FBURLRequestDefining>)request;
-(NSString *)host;
-(void)setError:(id)arg1;
-(NSError *)error;

@end
