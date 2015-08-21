/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TNLHTTPAttemptMetaData.h>

@class NSString;

@interface TNLSPDYAttemptMetaData : TNLHTTPAttemptMetaData

@property (nonatomic,copy) NSString * SPDYVersion; 
@property (nonatomic,copy) NSString * sessionRemoteAddress; 
@property (assign,nonatomic) long long sessionRemotePort; 
@property (assign,nonatomic) BOOL sessionDidUseCellular; 
@property (assign,nonatomic) BOOL sessionDidUseProxy; 
@property (assign,nonatomic) int sessionProxyStatus; 
@property (assign,nonatomic) long long sessionLatencyInMilliseconds; 
@property (assign,nonatomic) long long streamBlockInMilliseconds; 
@property (assign,nonatomic) long long streamConnectingInMilliseconds; 
@property (assign,nonatomic) long long streamId; 
@property (assign,nonatomic) long long layer4BytesReceived; 
@property (assign,nonatomic) long long layer4BodyBytesReceived; 
@property (assign,nonatomic) long long layer4BytesTransmitted; 
@property (assign,nonatomic) long long layer4BodyBytesTransmitted; 
@property (assign,nonatomic) double timeSessionConnected; 
@property (assign,nonatomic) double timeStreamCreated; 
@property (assign,nonatomic) double timeStreamRequestStarted; 
@property (assign,nonatomic) double timeStreamRequestLastHeader; 
@property (assign,nonatomic) double timeStreamRequestFirstData; 
@property (assign,nonatomic) double timeStreamRequestLastData; 
@property (assign,nonatomic) double timeStreamRequestEnded; 
@property (assign,nonatomic) double timeStreamResponseStarted; 
@property (assign,nonatomic) double timeStreamResponseLastHeader; 
@property (assign,nonatomic) double timeStreamResponseFirstData; 
@property (assign,nonatomic) double timeStreamResponseLastData; 
@property (assign,nonatomic) double timeStreamResponseEnded; 
@property (assign,nonatomic) double timeStreamClosed; 
-(long long)layer4BodyBytesTransmitted;
-(long long)layer4BodyBytesReceived;
-(BOOL)hasTimeStreamResponseLastData;
-(BOOL)hasTimeStreamResponseLastHeader;
-(double)timeStreamResponseLastData;
-(double)timeStreamResponseLastHeader;
-(void)setStreamId:(long long)arg1 ;
-(long long)streamId;
-(NSString *)SPDYVersion;
-(BOOL)hasStreamId;
-(BOOL)hasSessionLatencyInMilliseconds;
-(long long)sessionLatencyInMilliseconds;
-(BOOL)hasLayer4BytesReceived;
-(long long)layer4BytesReceived;
-(BOOL)hasLayer4BytesTransmitted;
-(long long)layer4BytesTransmitted;
-(BOOL)hasLayer4BodyBytesReceived;
-(BOOL)hasLayer4BodyBytesTransmitted;
-(BOOL)hasStreamConnectingInMilliseconds;
-(long long)streamConnectingInMilliseconds;
-(BOOL)hasStreamBlockInMilliseconds;
-(long long)streamBlockInMilliseconds;
-(BOOL)hasSessionProxyStatus;
-(int)sessionProxyStatus;
-(BOOL)hasSessionRemoteAddress;
-(BOOL)hasSessionRemotePort;
-(long long)sessionRemotePort;
-(BOOL)hasSessionDidUseProxy;
-(BOOL)sessionDidUseProxy;
-(BOOL)hasSPDYVersion;
-(void)setSPDYVersion:(NSString *)arg1 ;
-(void)setSessionRemotePort:(long long)arg1 ;
-(BOOL)sessionDidUseCellular;
-(void)setSessionDidUseCellular:(BOOL)arg1 ;
-(BOOL)hasSessionDidUseCellular;
-(void)setSessionDidUseProxy:(BOOL)arg1 ;
-(void)setSessionProxyStatus:(int)arg1 ;
-(void)setSessionLatencyInMilliseconds:(long long)arg1 ;
-(void)setStreamBlockInMilliseconds:(long long)arg1 ;
-(void)setStreamConnectingInMilliseconds:(long long)arg1 ;
-(void)setLayer4BytesReceived:(long long)arg1 ;
-(void)setLayer4BodyBytesReceived:(long long)arg1 ;
-(void)setLayer4BytesTransmitted:(long long)arg1 ;
-(void)setLayer4BodyBytesTransmitted:(long long)arg1 ;
-(double)timeSessionConnected;
-(void)setTimeSessionConnected:(double)arg1 ;
-(BOOL)hasTimeSessionConnected;
-(double)timeStreamCreated;
-(void)setTimeStreamCreated:(double)arg1 ;
-(BOOL)hasTimeStreamCreated;
-(double)timeStreamRequestStarted;
-(void)setTimeStreamRequestStarted:(double)arg1 ;
-(BOOL)hasTimeStreamRequestStarted;
-(double)timeStreamRequestLastHeader;
-(void)setTimeStreamRequestLastHeader:(double)arg1 ;
-(BOOL)hasTimeStreamRequestLastHeader;
-(double)timeStreamRequestFirstData;
-(void)setTimeStreamRequestFirstData:(double)arg1 ;
-(BOOL)hasTimeStreamRequestFirstData;
-(double)timeStreamRequestLastData;
-(void)setTimeStreamRequestLastData:(double)arg1 ;
-(BOOL)hasTimeStreamRequestLastData;
-(double)timeStreamRequestEnded;
-(void)setTimeStreamRequestEnded:(double)arg1 ;
-(BOOL)hasTimeStreamRequestEnded;
-(double)timeStreamResponseStarted;
-(void)setTimeStreamResponseStarted:(double)arg1 ;
-(BOOL)hasTimeStreamResponseStarted;
-(void)setTimeStreamResponseLastHeader:(double)arg1 ;
-(double)timeStreamResponseFirstData;
-(void)setTimeStreamResponseFirstData:(double)arg1 ;
-(BOOL)hasTimeStreamResponseFirstData;
-(void)setTimeStreamResponseLastData:(double)arg1 ;
-(double)timeStreamResponseEnded;
-(void)setTimeStreamResponseEnded:(double)arg1 ;
-(BOOL)hasTimeStreamResponseEnded;
-(double)timeStreamClosed;
-(void)setTimeStreamClosed:(double)arg1 ;
-(BOOL)hasTimeStreamClosed;
-(NSString *)sessionRemoteAddress;
-(void)setSessionRemoteAddress:(NSString *)arg1 ;
@end

