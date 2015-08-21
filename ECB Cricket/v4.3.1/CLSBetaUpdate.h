/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CLSBetaUpdate : NSObject {

	NSURL* url;
	NSString* version;
	NSString* promptMessage;
	NSString* promptTitle;
	NSString* cancelLabel;
	NSString* installLabel;

}

@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) NSString * promptTitle; 
@property (nonatomic,retain) NSString * promptMessage; 
@property (nonatomic,retain) NSString * cancelLabel; 
@property (nonatomic,retain) NSString * installLabel; 
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setPromptMessage:(NSString *)arg1 ;
-(void)setCancelLabel:(NSString *)arg1 ;
-(void)setInstallLabel:(NSString *)arg1 ;
-(NSString *)promptMessage;
-(NSString *)promptTitle;
-(NSString *)cancelLabel;
-(NSString *)installLabel;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

