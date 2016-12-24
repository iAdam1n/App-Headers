/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WABackupIdentity, NSData;

@interface WABackupFile : NSObject {

	WABackupIdentity* _identity;
	NSData* _initializationVector;

}

@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) WABackupIdentity * identity;                     //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
+(id)generateInitializationVector;
-(id)initWithIdentity:(id)arg1 initializationVector:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
-(WABackupIdentity *)identity;
-(NSData *)initializationVector;
-(NSData *)dataRepresentation;
@end
