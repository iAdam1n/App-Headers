/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FlurryKeychainWrapper : NSObject {

	NSString* identifier;

}

@property (nonatomic,retain) NSString * identifier; 
+(id)keychainWrapperWithIdentifier:(id)arg1 ;
-(id)setupSearchForKey:(id)arg1 ;
-(BOOL)updateValueData:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)identifier;
-(id)stringForKey:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
@end

