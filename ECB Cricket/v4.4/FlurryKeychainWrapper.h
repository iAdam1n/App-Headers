/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)objectForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
@end
