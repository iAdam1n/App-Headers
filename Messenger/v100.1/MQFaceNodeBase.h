/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <SceneKit/SCNNode.h>

@class NSData;

@interface MQFaceNodeBase : SCNNode {

	BOOL _generateVideoUVs;
	SCD_Struct_MQ605* _vertices;
	NSData* _indicesData;
	NSData* _verticesData;

}

@property (assign,nonatomic) SCD_Struct_MQ605* vertices;              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSData * indicesData;                    //@synthesize indicesData=_indicesData - In the implementation block
@property (nonatomic,retain) NSData * verticesData;                   //@synthesize verticesData=_verticesData - In the implementation block
@property (nonatomic,readonly) long long numTriangles; 
@property (nonatomic,readonly) long long verticesCount; 
@property (assign,nonatomic) BOOL generateVideoUVs;                   //@synthesize generateVideoUVs=_generateVideoUVs - In the implementation block
-(BOOL)generateVideoUVs;
-(void)setGenerateVideoUVs:(BOOL)arg1 ;
-(id)initWithData:(const float*)arg1 indices:(const unsigned short*)arg2 ;
-(void)updateFaceGeometry:(id)arg1 model:(id)arg2 effect:(id)arg3 ;
-(void)uploadGeometry;
-(NSData *)indicesData;
-(void)setIndicesData:(NSData *)arg1 ;
-(NSData *)verticesData;
-(void)setVerticesData:(NSData *)arg1 ;
-(long long)numTriangles;
-(void)dealloc;
-(SCD_Struct_MQ605*)vertices;
-(void)setVertices:(SCD_Struct_MQ605*)arg1 ;
-(long long)verticesCount;
-(void)setIndices:(const unsigned short*)arg1 ;
@end
