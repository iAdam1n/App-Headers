/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface GraphicsUtils : NSObject
+(void)makeQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 ;
+(void)verticallyFlipQuadTexture:(SCD_Struct_Gr5*)arg1 ;
+(void)makeCenteredQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 ;
+(float)distanceFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
+(void)translateQuad:(SCD_Struct_Gr5*)arg1 byVertex:(Vertex)arg2 ;
+(void)makeQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 imageWidth:(int)arg4 imageHeight:(int)arg5 visibleWidth:(int)arg6 visibleHeight:(int)arg7 ;
+(void)makeCenteredQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 imageWidth:(int)arg4 imageHeight:(int)arg5 visibleWidth:(int)arg6 visibleHeight:(int)arg7 ;
+(id)createBillboard3DPrimitiveWithView:(id)arg1 texturePath:(id)arg2 width:(float)arg3 height:(float)arg4 owner:(id)arg5 atlas:(float*)arg6 ;
+(id)createBillboard3DPrimitiveWithTexturePath:(id)arg1 width:(float)arg2 height:(float)arg3 owner:(id)arg4 atlas:(float*)arg5 ;
+(id)createBillboard3DPrimitiveWithCGImage:(CGImageRef)arg1 texturePath:(id)arg2 width:(float)arg3 height:(float)arg4 owner:(id)arg5 atlas:(float*)arg6 ;
+(void)setBillboard:(id)arg1 width:(float)arg2 height:(float)arg3 spriteLocation:(float*)arg4 ;
+(void)correctVertices:(SCD_Struct_Gr5*)arg1 ;
+(CGRect)screenBoundsInGameUnits:(float)arg1 ;
+(CGSize)screenSizeInGameUnits:(float)arg1 ;
+(void)makeVerticallyFlippedQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 ;
+(void)makeVerticallyFlippedCenteredQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 ;
+(void)addQuadTextureSeam:(SCD_Struct_Gr5*)arg1 seam:(float)arg2 ;
+(void)fitRepeatingTexture:(SCD_Struct_Gr5*)arg1 fitHeight:(BOOL)arg2 fitWidth:(BOOL)arg3 ;
+(void)makeQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 height:(float)arg3 textureScale:(float)arg4 ;
+(void)makeCenteredQuad:(SCD_Struct_Gr5*)arg1 position:(Vertex)arg2 width:(float)arg3 height:(float)arg4 color:(Color)arg5 ;
+(void)rotateQuad:(SCD_Struct_Gr5*)arg1 byAngle:(float)arg2 ;
+(void)triangulatedVertices:(SCD_Struct_Gr5*)arg1 fromQuad:(Quad*)arg2 ;
+(float)easeInOut:(float)arg1 ;
+(float)easeIn:(float)arg1 ;
+(float)easeOut:(float)arg1 ;
+(void)makeQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 imageWidth:(int)arg3 imageHeight:(int)arg4 visibleWidth:(int)arg5 visibleHeight:(int)arg6 ;
+(void)makeCenteredQuad:(SCD_Struct_Gr5*)arg1 width:(float)arg2 imageWidth:(int)arg3 imageHeight:(int)arg4 visibleWidth:(int)arg5 visibleHeight:(int)arg6 ;
+(Quad)quadFromVertices:(SCD_Struct_Gr5*)arg1 withOffset:(Vertex)arg2 ;
+(id)createBillboard3DPrimitiveWithView:(id)arg1 texturePath:(id)arg2 width:(float)arg3 height:(float)arg4 owner:(id)arg5 ;
+(id)createBillboard3DPrimitiveWithCGImage:(CGImageRef)arg1 texturePath:(id)arg2 width:(float)arg3 height:(float)arg4 owner:(id)arg5 ;
+(void)setModel3D:(id)arg1 width:(float)arg2 height:(float)arg3 spriteLocation:(float*)arg4 ;
+(void)alterQuad:(SCD_Struct_Gr5*)arg1 forTopCutOff:(float)arg2 ;
+(float)screenWidthInGameUnits:(float)arg1 ;
+(float)screenHeightInGameUnits:(float)arg1 ;
@end
