!-----------------------------------------------------------------------
      subroutine setup(ctx,q,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,&
&           u15,u16,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,ierr)
      real*8 ctx(1)
      real*8 u1(8)
      real*8 v1(8)
      integer q,ierr

      do i=1,q
        v1(i)=u1(i)
      enddo

      ierr=0
      end
!-----------------------------------------------------------------------
      subroutine mass(ctx,q,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,&
&           u15,u16,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,ierr)
      real*8 ctx(5)
      real*8 u1(8)
      real*8 u2(8)
      real*8 v1(8)
      integer q,ierr

      do i=1,q
        v1(i)=ctx(5)*u1(i)*u2(i)
      enddo

      ierr=0
      end
!-----------------------------------------------------------------------
