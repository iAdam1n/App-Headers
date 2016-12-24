/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSHTTPURLResponse;


@protocol FBNetworkerRequestStatus
@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) BOOL wasCancelled; 
@property (nonatomic,readonly) unsigned long long attempts; 
@property (nonatomic,readonly) double requestAddTime; 
@property (nonatomic,readonly) double requestBeginTime; 
@property (nonatomic,readonly) double requestEndTime; 
@property (nonatomic,readonly) double responseBeginTime; 
@property (nonatomic,readonly) double responseEndTime; 
@property (nonatomic,readonly) unsigned long long bytesUp; 
@property (nonatomic,readonly) unsigned long long bytesDownUncompressed; 
@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse; 
@property (nonatomic,readonly) BOOL isPushRequest; 
@property (nonatomic,readonly) BOOL isHttp2; 
@required
-(double)requestAddTime;
-(double)requestBeginTime;
-(double)responseBeginTime;
-(unsigned long long)bytesUp;
-(unsigned long long)bytesDownUncompressed;
-(unsigned long long)attempts;
-(BOOL)isPushRequest;
-(BOOL)isHttp2;
-(double)requestEndTime;
-(double)responseEndTime;
-(BOOL)isComplete;
-(BOOL)wasCancelled;
-(NSHTTPURLResponse *)httpResponse;

@end
