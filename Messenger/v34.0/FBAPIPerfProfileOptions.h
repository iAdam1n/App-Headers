/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBAPIPerfProfileOptions : NSObject {

	FBUserSession* _session;

}

@property (nonatomic,copy) NSString * userString; 
@property (assign,nonatomic) unsigned long long perfProfileFlags; 
-(unsigned long long)perfProfileFlags;
-(void)setPerfProfileFlags:(unsigned long long)arg1 ;
-(void)setUserString:(NSString *)arg1 ;
-(BOOL)isPerfProfileOptionEnabled:(unsigned long long)arg1 ;
-(void)setPerfProfileOption:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(NSString *)userString;
@end

